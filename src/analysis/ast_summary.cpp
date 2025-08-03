#include "ast_summary.h"

#include <algorithm>
#include <cctype>
#include <sstream>

namespace transcend::analysis {
std::string normalize_identifier(std::string identifier) { std::replace(identifier.begin(), identifier.end(), '-', '_'); return identifier; }
bool looks_like_type_annotation(const std::string& token) { return !token.empty() && token.front() == ':'; }
