
void FUN_0216767c(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    func_0x021bd72c(*param_1,0x1a);
  }
  iVar1 = DatabaseLocation::Database_LocationCreate(param_1[0xf]);
  param_1[5] = iVar1;
  FUN_0216cb60(iVar1,FUN_021676dc,param_1);
  return;
}

