
void FUN_02159afc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  uStack_8 = param_4;
  if (param_2 == 0) {
    local_10 = 0x100000;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x4c),&local_10);
  }
  else {
    local_c = 0xe8000;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x4c),&local_c);
  }
  return;
}

