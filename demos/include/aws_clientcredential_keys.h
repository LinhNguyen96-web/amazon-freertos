#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWTCCAkGgAwIBAgIUY3rXN3zER/C94ZLgs2M8n/Let0UwDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIwMDcxNzExMjEw\n"\
"MVoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMfrOgp9xH3iJSKRq0oM\n"\
"qdHj2pztA5WvHtY8A69st9sd3WouuhYzhRXakqslFfdGPofDSBIWhHY7635VYZUK\n"\
"VSWFxaTgP+FoSgwelU4byyRpSYUeT46lZ8CK9dojezAc6AVCHSC1bEQy7Tz1XHLE\n"\
"pyac6xmHwCrOw9+48JowOkS/cQjoqS1xotfOYz7hHXKIWsSHreeqTLf5il+ALEbX\n"\
"snz8pQ1+cevRMUZk330KHi98wNOFvI6BwKV7Ve1IfG9rNUhvEa2UXvx537h3Ya7+\n"\
"w9cnnRio9UzeX6yJw4S4t/cuHalgShxEM+RS+1vP88miYb6cwsSVjvcykfMaVo5C\n"\
"880CAwEAAaNgMF4wHwYDVR0jBBgwFoAUEPZ2kFJqrHE/Pm0bqPrqdCDHqxMwHQYD\n"\
"VR0OBBYEFNkY5E+ImKr6YT3VaubQ15w0uJviMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQB+revgt4mZ+PWEiS+JJ3ljlh8J\n"\
"oqDog1Nvu5VYIBbuYHp5DH/w3k0MITqAm6Ps+YNXWykZdPiBTRsvhVSsn6pFbfAI\n"\
"TLo7UIuCwMSQxFGJ5t3jTOt/kwKQ60DExoHbPB6z9nSih0n9PodV7kECBCEFqc4I\n"\
"fy6bUcAvPkMnmHNX3lG7vtOPw4FvAboRscT0vY0QekMDPGlqnvOTn/T2mdb2LCDv\n"\
"/v9M7cWh8GN0EXU80x4p4DAY0I1+mhQ8meq/1Roqr2V4Nf/tlE8S5jLlogL8hAss\n"\
"1d1O60KXPybMsAA0ZCSZ2lqusRc03Gn3i6u0SDtBicDgnkpHOmSTJkqOPPCV\n"\
"-----END CERTIFICATE-----"

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAx+s6Cn3EfeIlIpGrSgyp0ePanO0Dla8e1jwDr2y32x3dai66\n"\
"FjOFFdqSqyUV90Y+h8NIEhaEdjvrflVhlQpVJYXFpOA/4WhKDB6VThvLJGlJhR5P\n"\
"jqVnwIr12iN7MBzoBUIdILVsRDLtPPVccsSnJpzrGYfAKs7D37jwmjA6RL9xCOip\n"\
"LXGi185jPuEdcohaxIet56pMt/mKX4AsRteyfPylDX5x69ExRmTffQoeL3zA04W8\n"\
"joHApXtV7Uh8b2s1SG8RrZRe/HnfuHdhrv7D1yedGKj1TN5frInDhLi39y4dqWBK\n"\
"HEQz5FL7W8/zyaJhvpzCxJWO9zKR8xpWjkLzzQIDAQABAoIBADkprj/ftDZWWk3n\n"\
"HvYeZtRH9XNXZeX/265gHKGlUXDKukupLrY4Zv5XsAZVpVE9+ZUyJkJdw+RWv8Aw\n"\
"w6Us/imrdVbuc/WMr1eFyyU5Vz2DCW2RvCfKbb8lPKTx7kBUk5clT1TR6zIY6bK7\n"\
"aYK7bhvhVGvJYA4dbu5iYBGGZrLPFS86Sw4SUj/Rxi9omjdckjpaqixjn5LQG8/j\n"\
"u8mg/V7tmqt/4xQDbb6yrejVz16n4VGYogcaRv82NybudfeOhAfALPVkQ+Kst1CZ\n"\
"W+9kb+d5pHvP27lrOOO9qrZVjHNifoM+iIz3nVCYNmyW9a1sj8qRMApsMn62J5gv\n"\
"BGndkjUCgYEA5Dq+7GCDEc8SXiR/mJFcc1IGOIjjn/4sGWMinW/j7pSBeeJXWSMA\n"\
"YlY5shglRMyC2euRjU6ltPEZeX6mO4dBT4XhT4Si2njYwHAAkNED7G+ts8udWzlo\n"\
"ETNPWeSx1kRRxt4qeITflGCxcFtUEvn2NhOE/pNw67/eQsP8YyWM9nsCgYEA4D6d\n"\
"4eZWPPXTquwH597FHyjG4NRjr2JAUyLCkwrazlU2TqjJ3SdtXuZTokmIuld4TA/U\n"\
"/LhAun6wtZrHZm8zEeVqKTMhuYjhex++fVvStsg36fbS6eG/zOVrH24ozkJttfnZ\n"\
"dQdmcyqlwBszQ7NSbR47IJbHwVO1b/P3+k9CkFcCgYBcdmxZKXSQZ3sChvjmn6V7\n"\
"1vRMPTEy5W+KTX59mBIY2zNlZMyMgUCrllFDlMKsj8pHbUeHnyBFIRR4A1ZncZGF\n"\
"HTE93Pd5WVI/DGE+Sl+zjz8pQ0mZ5rUBmu7/9UYTD5St494C+5n07AOXCHkUQw57\n"\
"tAbCeItcB1yNYgdDR7hHNwKBgQCvw2Sss4XUsjn+NpLbw1huW9/GSbL4vOH+R7iK\n"\
"2G84WsH+VX4jwcuQHqhfA5QPuo+nzqD6lNDnXHXVYkP4niBBXrgfItzEN+3EO9Vr\n"\
"HJXEfpqU38nhV/il+QxFzmpdgOPNRtCTUgGTM1JHiQpdfiiVLqTZnlVjyuDjpy4v\n"\
"HADocQKBgQDc4oc7gFiJSUYa3U2g2EO76U0YBcmZbvPRMxY9C9zWAuIDNk2pmfGS\n"\
"0yh8ZiCf43gY9MUeAEq49doqFvuZpI8gSnhBtOO3NQNhNoOWKwCBSY8ASCHaR1bz\n"\
"atOkIE4rott7amE1WZczwJSQlpd4K98nvY93T0u3fpwaMw9ZeISG0g==\n"\
"-----END RSA PRIVATE KEY-----"

/*
 * PEM-encoded Just-in-Time Registration (JITR) certificate (optional).
 *
 * If used, must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""


#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
