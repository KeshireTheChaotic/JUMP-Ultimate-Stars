
void FUN_0203ef0c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)FUN_02037f84(param_1 + 0x4a4);
  *puVar1 = param_2;
  uVar2 = (**(code **)(*param_2 + 0x3c))();
  puVar1[1] = uVar2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  *(undefined1 *)(puVar1 + 5) = param_6;
  piVar3 = (int *)(**(code **)(*param_2 + 0x3c))();
  (**(code **)(*piVar3 + 8))();
  DC_FlushRange(param_3,param_5);
  return;
}

