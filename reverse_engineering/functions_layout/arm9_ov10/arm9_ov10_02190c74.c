
int FUN_02190c74(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint local_20;
  uint local_1c;
  
  local_20 = 0;
  local_1c = 0;
  do {
    FUN_02190ccc(param_1);
    uVar2 = local_1c;
    do {
      if (DAT_021a8538 == 0) {
        return 0;
      }
      FUN_02052ea0(100);
      iVar1 = FUN_02190d70(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x14);
    local_20 = local_20 + 1;
    if (7 < local_20) {
      return 0;
    }
  } while( true );
}

