
void FUN_0215b498(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  *(char *)(puVar1 + 0x137) = *(char *)(puVar1 + 0x137) + '\x01';
  if (*(char *)(puVar1 + 0x137) < '\r') {
    return;
  }
  FUN_02077494(*puVar1,(int)*(char *)((int)puVar1 + 0x4db),param_3,param_4,param_4);
  FUN_020797e4(puVar1[1]);
  FUN_0215ccf0(puVar1,0,0,(&DAT_0216fc38)[*(char *)((int)puVar1 + 0x4db)],1);
  FUN_02023894(*(undefined4 *)(puVar1[0x56] + 4),
               (char)(&DAT_0216d67e)[*(char *)((int)puVar1 + 0x4db) * 3] + 0x820000,0);
  (**(code **)(**(int **)(*(int *)(puVar1[0x56] + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(puVar1[0x56] + 4) + 0xd8))(*(int **)(puVar1[0x56] + 4),1);
  FUN_0215b67c(puVar1,param_1);
  FUN_0215b228(puVar1,0);
  FUN_02159c30(puVar1,0);
  FUN_0207342c(0x78,5);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215b5a4);
  return;
}

