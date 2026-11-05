
void FUN_021c6504(int *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  FUN_0200f69c(&uStack_18,1);
  puVar2 = (undefined2 *)(*param_1 + param_1[1] * 8);
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    if (puVar2 != (undefined2 *)0x0) {
      iVar3 = 4;
      puVar4 = puVar2;
      puVar5 = param_2;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar2 = puVar2 + 4;
    param_1[1] = param_1[1] + 1;
  }
  return;
}

