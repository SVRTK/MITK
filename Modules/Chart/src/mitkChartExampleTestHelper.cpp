/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#include "mitkChartExampleTestHelper.h"

// std includes
#include <string>

std::unique_ptr<QmitkChartxyData> mitk::ChartExampleTestHelper::GetDataOne()
{
    auto myDataOne = std::make_unique<QmitkChartxyData>();

    QMap<QVariant, QVariant> data;

    for (int i = 0; i < 10; i++)
    {
        data.insert(i, i);
    }

    myDataOne->SetData(data);
    myDataOne->SetLabel("DataOne");
    myDataOne->SetChartType("bar");
    myDataOne->SetColor("red");
    myDataOne->SetLineStyle("solid");

    return std::move(myDataOne);
}

std::unique_ptr<QmitkChartxyData> mitk::ChartExampleTestHelper::GetDataTwo()
{
    auto myDataTwo = std::make_unique<QmitkChartxyData>();

    QMap<QVariant, QVariant> data;

    for (int i = 10; i < 20; i++)
    {
        data.insert(i, i);
    }

    myDataTwo->SetData(data);
    myDataTwo->SetLabel("DataTwo");
    myDataTwo->SetChartType("bar");
    myDataTwo->SetColor("green");
    myDataTwo->SetLineStyle("solid");

    return std::move(myDataTwo);
}

std::unique_ptr<QmitkChartxyData> mitk::ChartExampleTestHelper::GetDataThree()
{
    auto myDataThree = std::make_unique<QmitkChartxyData>();

    QMap<QVariant, QVariant> data;

    for (int i = 20; i < 30; i++)
    {
        data.insert(i, i);
    }

    myDataThree->SetData(data);
    myDataThree->SetLabel("DataThree");
    myDataThree->SetChartType("bar");
    myDataThree->SetColor("blue");
    myDataThree->SetLineStyle("solid");

    return std::move(myDataThree);
}

std::unique_ptr<QmitkChartxyData> mitk::ChartExampleTestHelper::GetDataFour()
{
    auto myDataFour = std::make_unique<QmitkChartxyData>();

    QMap<QVariant, QVariant> data;

    for (int i = 30; i < 40; i++)
    {
        data.insert(i, i);
    }

    myDataFour->SetData(data);
    myDataFour->SetLabel("DataFour");
    myDataFour->SetChartType("bar");
    myDataFour->SetColor("yellow");
    myDataFour->SetLineStyle("solid");

    return std::move(myDataFour);
}

std::unique_ptr<QmitkChartxyData> mitk::ChartExampleTestHelper::GetDataFive()
{
    auto myDataFive = std::make_unique<QmitkChartxyData>();

    QMap<QVariant, QVariant> data;

    for (int i = 40; i < 50; i++)
    {
        data.insert(i, i);
    }

    myDataFive->SetData(data);
    myDataFive->SetLabel("DataFive");
    myDataFive->SetChartType("bar");
    myDataFive->SetColor("black");
    myDataFive->SetLineStyle("solid");

    return std::move(myDataFive);
}

QmitkChartWidget::ChartType mitk::ChartExampleTestHelper::ReturnChartTypeByString(std::string chartTypeString)
{
    if (chartTypeString == "bar")
    {
        return QmitkChartWidget::ChartType::bar;
    }

    if (chartTypeString == "line")
    {
        return QmitkChartWidget::ChartType::line;
    }

    if (chartTypeString == "spline")
    {
        return QmitkChartWidget::ChartType::spline;
    }

    if (chartTypeString == "pie")
    {
        return QmitkChartWidget::ChartType::pie;
    }

    if (chartTypeString == "area")
    {
        return QmitkChartWidget::ChartType::area;
    }

    if (chartTypeString == "area_spline")
    {
        return QmitkChartWidget::ChartType::area_spline;
    }

    if (chartTypeString == "scatter")
    {
        return QmitkChartWidget::ChartType::scatter;
    }

    return QmitkChartWidget::ChartType::bar;
}

QmitkChartWidget::ChartColor mitk::ChartExampleTestHelper::ReturnChartColorByString(std::string chartColorString)
{
    if (chartColorString == "red")
    {
        return QmitkChartWidget::ChartColor::red;
    }

    if (chartColorString == "orange")
    {
        return QmitkChartWidget::ChartColor::orange;
    }

    if (chartColorString == "yellow")
    {
        return QmitkChartWidget::ChartColor::yellow;
    }

    if (chartColorString == "green")
    {
        return QmitkChartWidget::ChartColor::green;
    }

    if (chartColorString == "blue")
    {
        return QmitkChartWidget::ChartColor::blue;
    }

    if (chartColorString == "purple")
    {
        return QmitkChartWidget::ChartColor::purple;
    }

    if (chartColorString == "brown")
    {
        return QmitkChartWidget::ChartColor::brown;
    }

    if (chartColorString == "magenta")
    {
        return QmitkChartWidget::ChartColor::magenta;
    }

    if (chartColorString == "tan")
    {
        return QmitkChartWidget::ChartColor::tan;
    }

    if (chartColorString == "cyan")
    {
        return QmitkChartWidget::ChartColor::cyan;
    }

    if (chartColorString == "olive")
    {
        return QmitkChartWidget::ChartColor::olive;
    }

    if (chartColorString == "maroon")
    {
        return QmitkChartWidget::ChartColor::maroon;
    }

    if (chartColorString == "navy")
    {
        return QmitkChartWidget::ChartColor::navy;
    }

    if (chartColorString == "aquamarine")
    {
        return QmitkChartWidget::ChartColor::aquamarine;
    }

    if (chartColorString == "turqouise")
    {
        return QmitkChartWidget::ChartColor::turqouise;
    }

    if (chartColorString == "silver")
    {
        return QmitkChartWidget::ChartColor::silver;
    }

    if (chartColorString == "lime")
    {
        return QmitkChartWidget::ChartColor::lime;
    }

    if (chartColorString == "teal")
    {
        return QmitkChartWidget::ChartColor::teal;
    }

    if (chartColorString == "indigo")
    {
        return QmitkChartWidget::ChartColor::indigo;
    }

    if (chartColorString == "violet")
    {
        return QmitkChartWidget::ChartColor::violet;
    }

    if (chartColorString == "pink")
    {
        return QmitkChartWidget::ChartColor::pink;
    }

    if (chartColorString == "black")
    {
        return QmitkChartWidget::ChartColor::black;
    }

    if (chartColorString == "white")
    {
        return QmitkChartWidget::ChartColor::white;
    }

    if (chartColorString == "grey")
    {
        return QmitkChartWidget::ChartColor::grey;
    }

    return QmitkChartWidget::ChartColor::red;
}

QmitkChartWidget::LineStyle mitk::ChartExampleTestHelper::ReturnChartStyleByString(std::string chartStyleString)
{
    if (chartStyleString == "solid")
    {
        return QmitkChartWidget::LineStyle::solid;
    }

    if (chartStyleString == "dashed")
    {
        return QmitkChartWidget::LineStyle::dashed;
    }

    return QmitkChartWidget::LineStyle::solid;
}

void mitk::ChartExampleTestHelper::Add(int dataSet)
{
    std::unique_ptr<QmitkChartxyData> myData;
    if (dataSet == 1)
    {
        myData = mitk::ChartExampleTestHelper::GetDataOne();
    }

    if (dataSet == 2)
    {
        myData = mitk::ChartExampleTestHelper::GetDataTwo();
    }

    if (dataSet == 3)
    {
        myData = mitk::ChartExampleTestHelper::GetDataThree();
    }

    if (dataSet == 4)
    {
        myData = mitk::ChartExampleTestHelper::GetDataFour();
    }

    if (dataSet == 5)
    {
        myData = mitk::ChartExampleTestHelper::GetDataFive();
    }

    std::map<double, double> data = mitk::ChartExampleTestHelper::ToStdMap(myData->GetXData(), myData->GetYData());
    auto label = myData->GetLabel().toString().toStdString();
    auto type = myData->GetChartType().toString().toStdString();
    auto color = myData->GetColor().toString().toStdString();
    auto style = myData->GetLineStyle().toString().toStdString();

    qmitkChartWidget.AddChartExampleData(data, label, type, color, style);
}

std::map<double, double> mitk::ChartExampleTestHelper::ToStdMap(QVariantList xData, QVariantList yData)
{
    auto xDataConverted = xData.toVector().toStdVector();
    auto yDataConverted = yData.toVector().toStdVector();

    std::map<double, double> data;
    for (size_t i = 0; i < xDataConverted.size(); i++)
    {
        data.insert(std::make_pair(xDataConverted[i].toDouble(), yDataConverted[i].toDouble()));
    }

    return data;
}

void mitk::ChartExampleTestHelper::ClearMemory()
{
    // Clear the vector
    qmitkChartWidget.Clear();
}
