#include <iostream>
#include <vector>
#include <CNTK.h>

int main() {
    // Загрузить данные MNIST
    auto data = ReadMnistData();

    // Определить входные данные
    Variable input = Input(data.features.shape(), DataType::float32, "Input");

    //Определить скрытый слой
    Dense hiddenLayer = Dense(100, input, Activation::relu, "HiddenLayer");

    // определить входной слой
    Output output = Output(data.labels.shape(), hiddenLayer, Loss::crossEntropyloss, "Output");

    // Создать модель
    Function model = makeNetwork(output);

    // Создать тренер
    TraningParameter trainingParams = TrainingParameter(
        leaningRatePerSample: 0.01,
        batchSize: 100,
        epochSize: data.trainDataSize / batchSize
    );

    // Обучить модель
    model.train(data.trainData, data.trainLabels, trainingParams);

    // Оценить модель
    TestProgress testProgress = evaluate(model, data.testData, data.testLabels);

    std::cout << "Accuracy: " << testProgress.accuracy() << std::endl;

    return 0;
}