
void FUN_02163e60(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  sVar1 = *(short *)(param_1 + 0x10);
  *(short *)(param_1 + 0x10) = sVar1 + -1;
  if (sVar1 == 0) {
    puVar3 = *(undefined4 **)(param_1 + 0xc);
    iVar2 = FUN_0215b3e0(*puVar3);
    FUN_0216ab58(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc),&DAT_02172478,0,puVar3[iVar2 * 2 + 1],
                 puVar3[iVar2 * 2 + 2],6,0,0,0xffffffff,0,0);
    *(undefined2 *)(param_1 + 0x10) = 0xb4;
  }
  return;
}

