
void FUN_021caa18(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*param_1 == 0) {
    *param_1 = param_2;
    return;
  }
  iVar1 = FUN_021caa84(param_1,param_3,param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = *param_1;
    puVar2 = (undefined4 *)jus_AllocDebug(0xc,s_ALFont_cpp_021d5060,&DAT_021d4e40,0xa1);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = jus_AllocDebug(8,s_ALUtilImp_h_021d4e8c,&DAT_021d4e4c,0x25);
      *puVar2 = uVar3;
      puVar2[1] = 4;
      *(undefined2 *)(puVar2 + 2) = 0;
      *(undefined2 *)((int)puVar2 + 10) = 2;
    }
    *param_1 = (int)puVar2;
    piVar4 = (int *)FUN_02037f84(puVar2);
    *piVar4 = iVar1;
  }
  piVar4 = (int *)FUN_02037f84(*param_1);
  *piVar4 = param_2;
  return;
}

