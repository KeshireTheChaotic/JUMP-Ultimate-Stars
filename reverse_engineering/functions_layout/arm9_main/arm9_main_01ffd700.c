
void FUN_01ffd700(void)

{
  int unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Could not recover jumptable at 0x01ffd710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(uint *)(&DAT_01ffd6c0 + unaff_r6 * 4) & 0xfffffffc))();
  return;
}

