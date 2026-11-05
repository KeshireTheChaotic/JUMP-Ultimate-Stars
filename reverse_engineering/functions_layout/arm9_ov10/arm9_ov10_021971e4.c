
void FUN_021971e4(int param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(param_1 + param_3 + -1);
  for (; 1 < param_3; param_3 = param_3 + -2) {
    *puVar2 = (char)*param_2;
    puVar3 = puVar2 + -1;
    puVar2 = puVar2 + -2;
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *puVar3 = (char)((ushort)uVar1 >> 8);
  }
  if (0 < param_3) {
    *puVar2 = (char)*param_2;
  }
  return;
}

