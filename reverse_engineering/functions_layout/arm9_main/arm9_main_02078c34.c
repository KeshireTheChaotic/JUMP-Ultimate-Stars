
bool FUN_02078c34(int param_1,uint *param_2,int *param_3,int *param_4,uint *param_5)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x558);
  if (puVar4 == (undefined4 *)0x0) {
    return false;
  }
  *param_4 = 0;
  *param_5 = (uint)*(byte *)(*(int *)(param_1 + 0x56c) + 0x42);
  for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
    puVar2 = param_2;
    piVar3 = param_3;
    if (*(char *)(puVar4 + 0x10) == '\0') {
      puVar2 = param_2 + 1;
      *param_2 = (uint)*(byte *)((int)puVar4 + 0x41);
      piVar3 = param_3 + 1;
      *param_3 = (int)*(char *)(puVar4[0xd] + 8);
      iVar1 = *param_4;
      *param_4 = iVar1 + 1;
      if (3 < iVar1 + 1) break;
    }
    param_2 = puVar2;
    param_3 = piVar3;
  }
  return *param_4 != 0;
}

