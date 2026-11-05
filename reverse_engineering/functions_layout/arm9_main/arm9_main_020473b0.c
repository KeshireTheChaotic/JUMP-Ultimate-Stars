
/* JUS-CLASS jus_Class_0209b79c::jus_Class_0209b79c [class-default] stores vtable 0209b79c into
   *this (constructor) */

undefined4 * jus_Class_0209b79c::jus_Class_0209b79c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  undefined4 uVar3;
  bool bVar4;
  
  *param_1 = &vftable;
  if (param_1[0x25] != 0) {
    FUN_0203d764(param_1[0xd]);
    param_1[0x25] = 0;
  }
  bVar4 = *(char *)((int)param_1 + 0x92) != '\0';
  if (bVar4) {
    unaff_r5 = param_1[0x2b];
  }
  if ((bVar4 && unaff_r5 != 0) && (iVar1 = FUN_0201a9ec(unaff_r5), iVar1 == 0)) {
    FUN_0201a958(unaff_r5,1);
  }
  iVar1 = param_1[0x27];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if (*(int *)(*(int *)(param_1[0x26] + iVar1 * 4) + 0x18) != 0) {
      FUN_020472a0();
    }
    uVar3 = *(undefined4 *)(param_1[0x26] + iVar1 * 4);
    iVar2 = FUN_0201a9ec(uVar3);
    if (iVar2 == 0) {
      FUN_0201a958(uVar3,1);
    }
  }
  FUN_02047488(param_1 + 0x26);
  FUN_0200b254(param_1 + 0x26);
  jus_Class_0209b410::jus_Class_0209b410(param_1);
  return param_1;
}

