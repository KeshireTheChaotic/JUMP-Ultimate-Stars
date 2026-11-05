
void FUN_02166674(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_0214ccf8[4] == 0) {
    DAT_0214ccf8[4] = DAT_0214ccfc + 0xc;
    func_0x02176de8(DAT_0214ccf8[4],DAT_0214ccf8[5],0x2a2f,s_jumpsstars2ds_0216ac48,
                    s_VXkOdX_0216ac58,0x1200,0x1200,DAT_0214ccf8[6],DAT_0214ccf8[0x11],param_4);
    DAT_0214ccf8[0xc] = 0;
    iVar1 = func_0x02176aa8(DAT_0214ccf8 + 0x1c,0,0x2167359,0);
    if (iVar1 == 0) {
      func_0x0219a7f4();
      (*(code *)*DAT_0214ccf8)(0x12,DAT_0214ccf8[1],DAT_0214ccf8[0xb]);
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x219bc98);
      return;
    }
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166711);
  return;
}

