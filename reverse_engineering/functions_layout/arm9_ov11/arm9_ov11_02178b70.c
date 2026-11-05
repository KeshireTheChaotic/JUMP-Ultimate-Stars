
void FUN_02178b70(int param_1,uint param_2)

{
  bool bVar1;
  
  while( true ) {
    if ((param_2 & *(uint *)(param_1 + *(int *)(param_1 + 0x70) * 4 + 0x18)) == 0) {
      if ((param_2 & *(uint *)(param_1 + 300)) == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    (*DAT_020a0e18)();
  }
  return;
}

