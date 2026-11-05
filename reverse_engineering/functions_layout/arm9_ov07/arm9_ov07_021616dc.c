
void FUN_021616dc(undefined2 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  *param_2 = (char)((ushort)*param_1 >> 8);
  param_2[1] = (char)*param_1;
  param_2[2] = (char)((ushort)param_1[1] >> 8);
  param_2[3] = (char)param_1[1];
  puVar2 = param_2 + 4;
  do {
    iVar1 = iVar3 + 4;
    iVar3 = iVar3 + 1;
    *puVar2 = *(undefined1 *)((int)param_1 + iVar1);
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0x1fc);
  return;
}

