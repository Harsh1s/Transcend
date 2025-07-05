#pragma once

#include <string>
#include <vector>

namespace transcend::analysis {
struct SymbolSummary { std::string name; std::string kind; int line; };
std::vector<SymbolSummary> collect_exported_symbols(const std::string& source);
bool looks_like_type_annotation(const std::string& token);
