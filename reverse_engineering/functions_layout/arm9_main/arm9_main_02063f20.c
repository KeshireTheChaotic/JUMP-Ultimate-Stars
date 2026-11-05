
undefined4 FUN_02063f20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar4 = OS_DisableInterrupts();
  iVar5 = FUN_02063f94(param_2,param_3);
  if (iVar5 == 0) {
    if (DAT_020afb10 == (undefined4 *)0x0) {
      DAT_020afb1c = 0;
      DAT_020afb1a = 0;
      DAT_020afb18 = 0;
      DAT_020afb10 = param_1;
      DAT_020afb14 = param_1;
    }
    else {
      puVar3 = (undefined4 *)DAT_020afb10[1];
      puVar2 = DAT_020afb10;
      while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
        puVar2 = puVar1;
        puVar3 = (undefined4 *)puVar1[1];
      }
      puVar2[1] = param_1;
      param_1[2] = puVar2;
    }
    uVar6 = FUN_02064380(param_2,param_3);
    *param_1 = uVar6;
    uVar6 = 1;
    param_1[7] = param_1[7] | 1;
  }
  OS_RestoreInterrupts(uVar4);
  return uVar6;
}

