
void FUN_021955c0(int param_1,undefined1 *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  iVar3 = FUN_021956d4(*param_2,param_2[1]);
  if (iVar3 != 0) {
    FUN_02051890(param_2 + 2,param_1 + 0x34,0x20);
    bVar1 = param_2[0x22];
    if (bVar1 == 0x20) {
      FUN_02051890(param_2 + 0x23,param_1 + 0x74,0x20);
      FUN_021963b0(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    puVar5 = param_2 + 0x23 + bVar1;
    uVar4 = FUN_0200d12c(CONCAT11(*puVar5,puVar5[1]),2);
    sVar2 = FUN_021956e0(puVar5 + 2,uVar4,2);
    *(short *)(param_1 + 0x32) = sVar2;
    if (sVar2 != 0) {
      *(undefined1 *)(param_1 + 0x455) = 1;
    }
  }
  return;
}

