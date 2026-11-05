
void FUN_02164398(int param_1)

{
  undefined4 unaff_r8;
  undefined4 in_cr15;
  
  if (*(short *)(param_1 + 2) == 8) {
    coprocessor_store2(0,in_cr15,unaff_r8);
    FUN_02055684(9);
  }
  return;
}

