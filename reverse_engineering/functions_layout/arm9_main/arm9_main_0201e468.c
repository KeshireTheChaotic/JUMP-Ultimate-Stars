
void FUN_0201e468(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(short *)(param_2 + *(short *)(param_2 + 2) * 2);
  if (uVar3 == 0) {
    return;
  }
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
    iVar2 = (int)*(short *)(param_2 + 2);
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x6c);
    (*pcVar1)(*(int **)(param_1 + 4),
              param_2 + (iVar2 + *(short *)(param_2 + (iVar2 + uVar4) * 2 + 2)) * 2,pcVar1,iVar2,
              param_4);
  }
  return;
}

