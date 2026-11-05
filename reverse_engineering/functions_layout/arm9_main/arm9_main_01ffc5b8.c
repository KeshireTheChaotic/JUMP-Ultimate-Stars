
void FUN_01ffc5b8(void)

{
  int unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Could not recover jumptable at 0x01ffc5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((uint)(&PTR_LAB_01ffc578)[unaff_r6] & 0xfffffffc))();
  return;
}

