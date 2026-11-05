
void FUN_02167470(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xb];
  if (iVar1 == 0) {
    if (*param_1 != 0) {
      func_0x021bd72c(*param_1,0x1b);
    }
  }
  else if (iVar1 == 1) {
    if (*param_1 != 0) {
      func_0x021bd72c(*param_1,0x1c);
    }
  }
  else if ((iVar1 == 2) && (*param_1 != 0)) {
    func_0x021bd72c(*param_1,0x1d);
  }
  iVar1 = DatabaseList::Database_ListCreate(param_1[0xb],param_1[0xd]);
  param_1[3] = iVar1;
  FUN_02169364(iVar1,FUN_02167524,param_1);
  return;
}

