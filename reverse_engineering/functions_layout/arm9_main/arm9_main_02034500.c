
void FUN_02034500(void)

{
  int iVar1;
  
  do {
    for (DAT_020a0e30 = (int *)DAT_020a0fc8[3]; DAT_020a0e30 != (int *)0x0;
        DAT_020a0e30 = (int *)DAT_020a0e30[3]) {
      if (DAT_020a0fc8[0xb] == 0) {
        FUN_020284c0();
        if (DAT_020a0fc8[0xb] != 0) {
          return;
        }
      }
      else {
        iVar1 = FUN_02028210();
        if (iVar1 == 0) {
          (*DAT_020a0e18)();
        }
        else if (iVar1 != 0xffff) {
          if (iVar1 == 1) {
            FUN_02028330();
          }
          else {
            (**(code **)(*DAT_020a0fc8 + 0x54))(DAT_020a0fc8,iVar1 + -1);
          }
        }
      }
      DAT_020a0fc8 = DAT_020a0e30;
    }
    DAT_02093c24 = DAT_02093c24 + 1;
    DAT_020a0fc8 = (int *)0x0;
    (*DAT_020a0e18)();
  } while( true );
}

