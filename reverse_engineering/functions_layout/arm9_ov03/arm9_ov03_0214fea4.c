
void FUN_0214fea4(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  puVar5 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  if (iVar4 == 3) {
    FUN_0214fb7c(*(undefined4 *)(puVar5 + 4));
    iVar2 = FUN_0214fde8();
    if (iVar2 == 0) {
      return;
    }
  }
  iVar2 = 0;
  *puVar5 = (&DAT_0215d458)[iVar4];
  puVar5[1] = (char)iVar4;
  do {
    func_0x021b65d8(*(undefined4 *)(*(int *)(puVar5 + iVar2 * 4 + 0x20) + 4));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  bVar1 = true;
  if (((iVar4 != 4) && (-1 < *(int *)(&DAT_0215d484 + (uint)(byte)puVar5[1] * 4))) &&
     (iVar4 = FUN_02072300(), iVar4 != 0)) {
    if (*(int *)(puVar5 + 0x70) == 0) {
      uVar3 = func_0x021ba49c(0,3,1);
      *(undefined4 *)(puVar5 + 0x70) = uVar3;
    }
    func_0x021bac28(*(undefined4 *)(puVar5 + 0x70),0x60,0,0,0,0,0,0);
    while (iVar4 = func_0x021bad2c(*(undefined4 *)(puVar5 + 0x70)), iVar4 == 0) {
      (*DAT_020a0e18)();
    }
    iVar4 = func_0x021bad10(*(undefined4 *)(puVar5 + 0x70));
    if (iVar4 == 0) {
      iVar4 = *(int *)(&DAT_0215d484 + (uint)(byte)puVar5[1] * 4);
      FUN_02073114(iVar4 * 0xca4 + 0x3e60);
      (&DAT_020b4dac)[iVar4 * 0xca4] = 0;
      bVar1 = true;
    }
    else if ((iVar4 == 1) || (iVar4 != 2)) {
      FUN_02150100(8);
      func_0x021bac28(*(undefined4 *)(puVar5 + 0x70),0x61,0,0,0,0,0,0);
      while (iVar4 = func_0x021bad2c(*(undefined4 *)(puVar5 + 0x70)), iVar4 == 0) {
        (*DAT_020a0e18)();
      }
      iVar4 = func_0x021bacfc(*(undefined4 *)(puVar5 + 0x70));
      if (iVar4 == 0) {
        bVar1 = false;
      }
      else {
        func_0x021c4ec0(*(undefined4 *)(&DAT_0215d484 + (uint)(byte)puVar5[1] * 4));
        FUN_020703c8(*(undefined4 *)(&DAT_0215d484 + (uint)(byte)puVar5[1] * 4),0);
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
  }
  iVar4 = 0;
  do {
    func_0x021b65e0(*(undefined4 *)(*(int *)(puVar5 + iVar4 * 4 + 0x20) + 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  func_0x021b6214(*(undefined4 *)(*(int *)(puVar5 + 0x24) + 4),1);
  if (bVar1) {
    func_0x021b65bc();
    FUN_02150100(4);
    FUN_02073ebc(3,1);
    FUN_02028384(*(undefined4 *)(*(int *)(puVar5 + 4) + 4),FUN_0214fbc4);
  }
  return;
}

