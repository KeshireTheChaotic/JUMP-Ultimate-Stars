
void FUN_02159e90(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined1 *param_5
                 )

{
  bool bVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0200d12c(uVar7,5);
  uVar6 = extraout_r1 & 0xff;
  uVar2 = FUN_0200d12c(uVar7,5);
  bVar8 = (param_4 & 0x30000) == 0x20000;
  uVar2 = uVar2 & 0xff;
  if (bVar8) {
    uVar2 = 1;
  }
  bVar1 = false;
  if (bVar8) {
    *param_5 = (char)uVar2;
  }
  else if (*(int *)(iVar5 + 0xc) != 0) {
    uVar3 = uVar2 + (int)*(char *)(iVar5 + 0x4d8);
    if ((int)uVar3 < 0) {
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      uVar2 = uVar2 + (uVar3 & 0xff) & 0xff;
      bVar1 = true;
    }
    else {
      iVar4 = (int)*(char *)(iVar5 + 0x4da) + uVar3;
      if (4 < iVar4 + 1) {
        uVar3 = iVar4 - 3;
        if ((int)uVar3 < 0) {
          uVar3 = -uVar3;
        }
        uVar2 = uVar2 - (uVar3 & 0xff) & 0xff;
        bVar1 = true;
      }
    }
    uVar3 = uVar6 + (int)*(char *)(iVar5 + 0x4d7);
    if ((int)uVar3 < 0) {
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      uVar6 = uVar6 + (uVar3 & 0xff) & 0xff;
      bVar1 = true;
    }
    else {
      iVar4 = (int)*(char *)(iVar5 + 0x4d9) + uVar3;
      if (5 < iVar4 + 1) {
        uVar3 = iVar4 - 4;
        if ((int)uVar3 < 0) {
          uVar3 = -uVar3;
        }
        uVar6 = uVar6 - (uVar3 & 0xff) & 0xff;
        bVar1 = true;
      }
    }
    if (bVar1) {
      *param_5 = 1;
      local_20 = 0;
      local_1c = 0;
      FUN_02159cd8(*(undefined4 *)(uVar2 * 0x14 + iVar5 + uVar6 * 4 + 0xa8),&local_1c,&local_20,
                   0x10001);
    }
  }
  return;
}

