# Zenith: The Last City

Endpoint: `https://skywave.zenithmmo.com/api/`

The API Key has always been `fab1f50a-a92a-4bae-95df-3dad3cbd0fc1` or so I can assume.

## Authentication

URL: `/api/auth/login`

Headers:
 - Auth: `Bearer <API KEY>`

Payload:
 - usernameOrEmail: `Username Or Email Here`
 - password: `Password Here`

The response takes 2 main forms as json if there is an error:
 - `{ error: true, message: 'Unauthorized Request.' }`
Or as a string which is a token, you should store this in a file for now so you don't have to keep requesting the login API

## Account Data

URL: `/api/info/me`

Headers:
 - Auth: `Bearer <API KEY>`

Payload:
 - sessionId: `<TOKEN>`

Response is a JSON object

## Friends Data

URL: `/api/info/friends`

Headers:
 - Auth: `Bearer <API KEY>`

Payload:
 - sessionId: `<TOKEN>`

Response is a JSON array

## Character Data

URL: `/api/info/characters`

Headers:
 - Auth: `Bearer <API KEY>`

Payload:
 - sessionId: `<TOKEN>`

Response is a JSON array

## This is currently all I can find in the way of api endpoints.
