
void FUN_0205e108(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = (uint)*(ushort *)((int)param_1 + 10);
  puVar2 = (undefined4 *)(param_2 + uVar1);
  if (*(int *)(param_2 + uVar1) == 0) {
    *param_1 = puVar2[1];
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + uVar1) + uVar1 + 4) = puVar2[1];
  }
  if (puVar2[1] == 0) {
    param_1[1] = *puVar2;
  }
  else {
    *(undefined4 *)(puVar2[1] + (uint)*(ushort *)((int)param_1 + 10)) = *puVar2;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + -1;
  return;
}

