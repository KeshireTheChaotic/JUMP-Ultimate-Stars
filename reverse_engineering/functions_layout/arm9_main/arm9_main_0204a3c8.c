
/* JUS-CLASS jus_TagBBDS::~jus_TagBBDS [class-type-tag] slot 0/1 of vtable 020949a4; resets vtables
   (destructor) */

undefined4 * jus_TagBBDS::~jus_TagBBDS(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &vftable;
  if (*(char *)(param_1 + 2) != '\0') {
    uVar2 = param_1[3];
    iVar1 = FUN_0201a9ec(uVar2);
    if (iVar1 == 0) {
      FUN_0201a958(uVar2,1);
    }
  }
  return param_1;
}

