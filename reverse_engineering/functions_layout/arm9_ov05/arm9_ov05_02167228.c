
void FUN_02167228(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    func_0x021bd72c(*param_1,0x18);
  }
  iVar1 = DatabaseMenu::Database_MenuCreate(param_1[10]);
  param_1[1] = iVar1;
  FUN_0216812c(iVar1,FUN_02167288,param_1);
  return;
}

