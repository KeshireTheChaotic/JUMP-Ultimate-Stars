
void FUN_0207e538(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_3 * 0x18 + *(int *)(param_2 + 0x18));
  if (*(char *)(puVar4 + 5) == '\f') {
    FUN_020855dc(param_1,*(undefined4 *)(param_2 + 0x30),(int)*(short *)((int)puVar4 + 0x16),*puVar4
                 ,puVar4[1],puVar4[2],puVar4[3],param_4,param_4);
  }
  else {
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *param_1 = *puVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  return;
}

