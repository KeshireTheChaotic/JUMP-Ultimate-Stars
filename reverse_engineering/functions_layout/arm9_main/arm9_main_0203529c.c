
/* JUS-CLASS jus_TagCNTR::~jus_TagCNTR [class-type-tag] slot 0/1 of vtable 02095560; resets vtables
   (destructor) */

undefined4 * jus_TagCNTR::~jus_TagCNTR(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &vftable;
  if (*(char *)(param_1 + 5) != '\0') {
    uVar2 = param_1[4];
    iVar1 = FUN_0201a9ec(uVar2);
    if (iVar1 == 0) {
      FUN_0201a958(uVar2,1);
    }
  }
  jus_TagNRML::jus_TagNRML(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

