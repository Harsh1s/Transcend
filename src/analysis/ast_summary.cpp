#include "ast_summary.h"

#include <algorithm>
#include <cctype>
#include <sstream>

namespace transcend::analysis {
std::string normalize_identifier(std::string identifier) { std::replace(identifier.begin(), identifier.end(), '-', '_'); return identifier; }
bool looks_like_type_annotation(const std::string& token) { return !token.empty() && token.front() == ':'; }
std::vector<SymbolSummary> collect_exported_symbols(const std::string& source) { std::vector<SymbolSummary> symbols; std::istringstream input(source); std::string line; int line_no = 1; while (std::getline(input, line)) { if (line.find("export ") == 0) symbols.push_back({line.substr(7), "export", line_no}); ++line_no; } return symbols; }
}  // namespace transcend::analysis
