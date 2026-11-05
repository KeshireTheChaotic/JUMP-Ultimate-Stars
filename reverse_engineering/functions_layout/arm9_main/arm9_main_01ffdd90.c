
void FUN_01ffdd90(void)

{
  int unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Could not recover jumptable at 0x01ffdda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(uint *)(&DAT_01ffdd50 + unaff_r6 * 4) & 0xfffffffc))();
  return;
}

