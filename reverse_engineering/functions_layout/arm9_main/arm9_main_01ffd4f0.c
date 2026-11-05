
void FUN_01ffd4f0(void)

{
  int unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Could not recover jumptable at 0x01ffd500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((uint)(&PTR_LAB_01ffd4b0)[unaff_r6] & 0xfffffffc))();
  return;
}

