
void FUN_02000000(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdef,0x2000000);
  (*pcVar1)();
}

