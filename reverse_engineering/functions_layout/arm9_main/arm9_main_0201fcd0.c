
int FUN_0201fcd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_1[0x15] == 0) {
    iVar1 = 0;
  }
  else {
    puVar3 = (undefined2 *)param_1[0x16];
    uStack_14 = param_4;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xa0))();
    local_18 = *puVar2;
    while (iVar1 = FUN_02016314(&local_18,*puVar3), iVar1 != 0) {
      puVar3 = puVar3 + -2;
    }
    while (iVar1 = FUN_02016328(puVar3[2],&local_18), iVar1 != 0) {
      puVar3 = puVar3 + 2;
    }
    iVar1 = ((int)puVar3 - param_1[0x15]) / 4;
  }
  return iVar1;
}

