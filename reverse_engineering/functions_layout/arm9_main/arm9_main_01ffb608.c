
void FUN_01ffb608(void)

{
  int unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Could not recover jumptable at 0x01ffb618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(uint *)(&DAT_01ffb5c8 + unaff_r6 * 4) & 0xfffffffc))();
  return;
}

