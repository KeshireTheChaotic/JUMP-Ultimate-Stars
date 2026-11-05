
void FUN_02028e90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0201a228(0xe0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = jus_Class_02094864::jus_Class_02094864();
  }
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  *(undefined4 *)(iVar2 + 8) = param_1;
  return;
}

