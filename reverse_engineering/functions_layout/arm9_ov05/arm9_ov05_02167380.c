
void FUN_02167380(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    func_0x021bd72c(*param_1,0x19);
  }
  iVar1 = DatabasePersonal::Database_PersonalCreate(param_1[0xe]);
  param_1[2] = iVar1;
  FUN_0216baa0(iVar1,FUN_021673e0,param_1);
  return;
}

