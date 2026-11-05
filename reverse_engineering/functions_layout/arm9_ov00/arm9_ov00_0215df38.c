
void FUN_0215df38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  
  bVar1 = false;
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  bVar2 = false;
  iVar3 = FUN_02155b08(puVar4[0x14],0x564d5049,0,param_4,param_4);
  if ((iVar3 != 0) && (iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x68))(), iVar3 != 0)) {
    bVar1 = true;
  }
  iVar3 = FUN_02155b08(puVar4[0x2b],0x564d5049,0);
  if ((iVar3 != 0) && (iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x68))(), iVar3 != 0)) {
    bVar2 = true;
  }
  if (!bVar1 || !bVar2) {
    return;
  }
  if (*(byte *)(puVar4 + 0x6d) < *(byte *)((int)puVar4 + 0x1b5)) {
    FUN_0214ec4c(*puVar4,1);
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}

