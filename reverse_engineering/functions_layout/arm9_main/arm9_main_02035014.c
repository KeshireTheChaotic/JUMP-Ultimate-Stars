
/* JUS-CLASS jus_TagNRML::jus_TagNRML [class-type-tag] stores vtable 02094c84 into *this
   (constructor) */

undefined4 * jus_TagNRML::jus_TagNRML(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &vftable;
  if (*(char *)(param_1 + 3) != '\0') {
    uVar2 = param_1[2];
    iVar1 = FUN_0201a9ec(uVar2);
    if (iVar1 == 0) {
      FUN_0201a958(uVar2,1);
    }
  }
  return param_1;
}

