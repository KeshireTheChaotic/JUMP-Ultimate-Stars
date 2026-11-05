
uint FUN_02031070(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x9c4) + -1;
  *(int *)(param_1 + 0x9c4) = iVar1;
  if (iVar1 == 0) {
    FUN_02030f68();
  }
  puVar2 = *(uint **)(param_1 + 0x9cc);
  *(uint **)(param_1 + 0x9cc) = puVar2 + 1;
  uVar3 = *puVar2;
  uVar3 = uVar3 ^ uVar3 >> 0xb;
  uVar3 = uVar3 ^ (uVar3 & 0x13a58ad) << 7;
  uVar3 = uVar3 ^ (uVar3 & 0x1df8c) << 0xf;
  return uVar3 ^ uVar3 >> 0x12;
}

