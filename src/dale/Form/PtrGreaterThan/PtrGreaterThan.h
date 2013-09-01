#ifndef DALE_FORM_PTRGREATERTHAN
#define DALE_FORM_PTRGREATERTHAN

namespace dale
{
namespace Form
{
namespace PtrGreaterThan
{
bool execute(Generator *gen,
             Element::Function *fn,
             llvm::BasicBlock *block,
             Node *node,
             bool get_address,
             bool prefixed_with_core,
             ParseResult *pr);
}
}
}

#endif
