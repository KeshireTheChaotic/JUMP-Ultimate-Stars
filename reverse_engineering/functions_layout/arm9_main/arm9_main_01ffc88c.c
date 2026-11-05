
void FUN_01ffc88c(void)

{
  int unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Could not recover jumptable at 0x01ffc89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(uint *)(&DAT_01ffc84c + unaff_r6 * 4) & 0xfffffffc))();
  return;
}

