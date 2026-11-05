
void FUN_027e9a1c(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808000"] */
  uVar1 = 0;
  do {
    *(undefined2 *)(&DAT_04808000 + (ushort)(&DAT_027f7db4)[uVar1 * 2]) = (&DAT_027f7db6)[uVar1 * 2]
    ;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x19);
  return;
}

