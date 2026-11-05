
/* WARNING: Removing unreachable block (ram,0x0214ceec) */

void FUN_0214ce34(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [72];
  undefined4 uStack_18;
  
  puVar5 = auStack_60;
  DAT_0216ace8 = 2;
  uStack_18 = param_4;
  iVar2 = func_0x021bff44(param_2);
  if (iVar2 != 0) {
    DAT_0216ace8 = 7;
    return;
  }
  bVar1 = false;
  if (*param_1 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    FUN_02064744(auStack_60);
    iVar2 = FUN_0206451c(auStack_60,*param_1);
    if (iVar2 == 0) goto LAB_0214cf7c;
  }
  uVar3 = func_0x021bf4ac(puVar5);
  if (0x10000 < uVar3) {
    uVar3 = 0x10000;
  }
  if (uVar3 != 0) {
    if ((uVar3 < 0x101) && (*(char *)(DAT_020a0dd8 + 0x414) != '\0')) {
      DAT_0216ace4 = FUN_0201a6d8(DAT_020a0f60,uVar3);
    }
    else {
      DAT_0216ace4 = FUN_0201a418(DAT_020a0dd8,0,uVar3);
    }
    if (DAT_0216ace4 != 0) {
      iVar2 = func_0x021bf19c(puVar5,DAT_0216ace4,uVar3);
      if ((iVar2 != 0) && (iVar2 = func_0x021bef3c(param_1,DAT_0216ace4), iVar2 != 0)) {
        bVar1 = true;
      }
      iVar2 = DAT_0216ace4;
      if ((!bVar1) && (iVar4 = FUN_0201a9ec(DAT_0216ace4), iVar4 == 0)) {
        FUN_0201a958(iVar2,1);
      }
    }
  }
  if (puVar5 == auStack_60) {
    FUN_020644ec();
  }
LAB_0214cf7c:
  if (!bVar1) {
    FUN_02055684();
  }
  return;
}

