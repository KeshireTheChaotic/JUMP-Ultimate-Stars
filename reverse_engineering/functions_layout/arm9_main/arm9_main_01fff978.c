
void FUN_01fff978(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x14f0);
  iVar1 = 8;
  *(undefined4 *)(param_2 + 0x6c) = 1;
  puVar2 = (undefined4 *)(param_2 + 0x78);
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar1 != 0);
  return;
}

