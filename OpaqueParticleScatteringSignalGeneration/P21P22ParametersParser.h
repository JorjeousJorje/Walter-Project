#pragma once
#include "MultipleSignalParametersParser.h"


class P21P22ParametersParser: public MultipleSignalParametersParser {



public:



	std::optional<ParameterHolder> parseSignalParameters(const std::string& iFilePath, double iThetaSca) override {
		return MultipleSignalParametersParser::parseSignalParameters({ScatteringMode::P21, ScatteringMode::P22}, iFilePath, iThetaSca);
	}

	std::optional<ParameterHolder> parseSignalParameters(const std::string_view& iFilePath, double iThetaSca) override {
		return MultipleSignalParametersParser::parseSignalParameters({ ScatteringMode::P21, ScatteringMode::P22 }, iFilePath, iThetaSca);
	}
};