
void FUN_02022208(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 100) == DAT_020a0fec)) {
    iVar1 = jus_AllocDebug(0x40);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = jus_Class_02095a08::jus_Class_02095a08(iVar1,param_1,0);
    }
    FUN_0202201c(param_1,uVar2);
  }
  (**(code **)(**(int **)(param_1 + 100) + 0x18))(*(int **)(param_1 + 100),param_2);
  return;
}

