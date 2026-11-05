
void FUN_01ffae80(void)

{
  int unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Could not recover jumptable at 0x01ffae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((uint)(&PTR_LAB_01ffae20)[unaff_r6] & 0xfffffffc))();
  return;
}

